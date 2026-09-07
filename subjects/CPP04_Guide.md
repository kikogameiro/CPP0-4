# A Full Guide to CPP04 — Subtype Polymorphism, Abstract Classes, Interfaces

CPP04 is the module where the C++ piscine really starts feeling like object-oriented programming instead of "C with classes." Everything before this (CPP00–CPP03) was preparing the ground: Orthodox Canonical Form, references vs pointers, inheritance. CPP04 is where all of that gets used together to build class hierarchies that behave differently depending on the actual type of object, even when you're manipulating them through a common base type.

This guide is built in two layers, on purpose:
1. **The concepts**, explained slowly, with analogies, before any code.
2. **The exercises themselves**, mapped onto those concepts, with a step-by-step approach and the traps people fall into.

---

## Part 1 — Building the Concepts

### 1.1 Why polymorphism exists (the problem it solves)

Imagine you have a base class `Animal`, and derived classes `Dog` and `Cat`. Each one needs to make its own sound: a dog barks, a cat meows. Without polymorphism, if you wanted to store a bunch of animals together (say, in an array) and ask each one to make its sound, you'd need to know the *exact* type of each object to call the right function. That defeats the purpose of having a common base class at all — you'd be writing `if` chains checking types everywhere.

Polymorphism solves this: it lets you call `makeSound()` on something you only know as an `Animal`, and have the *actual* object (a `Dog` or a `Cat`) decide what happens. The base class defines the *interface* (the promise: "every Animal can make a sound"), and each derived class defines the *behavior* (the specific sound).

This specific flavor is called **subtype polymorphism** (also "runtime polymorphism"): the decision of *which* function body actually runs is made based on the real, dynamic type of the object — not the type of the variable or pointer you're holding.

### 1.2 Static type vs dynamic type

This is the single most important distinction in this module. Every object handled through a pointer or reference has two "types":

- The **static type** is what the compiler sees when it reads your code — the declared type of the variable. `Animal* a` has static type `Animal*`.
- The **dynamic type** is what the object *actually is* at runtime. If `a` points to a `Dog`, the dynamic type is `Dog`.

Without polymorphism, C++ resolves function calls using the static type (this is called *early binding* / *static binding*). With polymorphism (`virtual` functions), C++ resolves the call using the dynamic type instead (*late binding* / *dynamic binding*). That's the whole mechanism in one sentence.

### 1.3 The `virtual` keyword

You tell the compiler "resolve this function call at runtime, based on the real object" by marking a member function `virtual` in the base class:

```cpp
class Animal {
public:
    virtual void makeSound() const;
};
```

Once a function is `virtual` in the base class, it stays virtual in every derived class automatically, even if you don't repeat the keyword (though it's good style to repeat it for clarity).

**How it works conceptually (you don't need the exact implementation, but the mental model helps):** each object of a class with virtual functions carries a hidden pointer to a table of function addresses for its actual class (informally called a "vtable"). When you call a virtual function through a pointer or reference, the program looks up the correct function in that table instead of hardcoding which one to call at compile time. This is why polymorphism only works through **pointers or references** to the base class — never through plain objects (see 1.4).

### 1.4 Object slicing — the trap

This is the part that confuses almost everyone the first time. If you do this:

```cpp
Dog d;
Animal a = d; // COPY by value, not a pointer/reference
a.makeSound(); // calls Animal's version, NOT Dog's
```

`a` is a full `Animal` object, built by copying only the `Animal` part of `d`. The `Dog`-specific parts are "sliced off." Polymorphism never even enters the picture here, because there's no dynamic type to look up — `a` genuinely *is* an `Animal`, nothing more.

Polymorphism only kicks in when you manipulate the object through an `Animal*` or `Animal&` that is *actually pointing/referring to* a `Dog`:

```cpp
Dog d;
Animal* a = &d;
a->makeSound(); // calls Dog's version — polymorphism works here
```

This is why the exercises insist you manipulate your animals through base-class pointers.

### 1.5 Virtual destructors — why they matter

If you `delete` an object through a base-class pointer, and the base class destructor is *not* virtual, only the base part gets destroyed — the derived part's destructor never runs. If your `Dog` allocates memory in its constructor (as it will in ex01, with a `Brain*`), that memory leaks.

```cpp
class Animal {
public:
    virtual ~Animal(); // MUST be virtual
};
```

Rule of thumb burned into every C++ programmer: **if a class has any virtual function, or is meant to be used polymorphically, give it a virtual destructor.** This single line is one of the most-checked things during CPP04 defenses.

### 1.6 Deep copy vs shallow copy

This becomes concrete in ex01 with the `Brain` class. If `Dog` holds a `Brain*` (a pointer to a dynamically allocated object), and you use the compiler-generated copy constructor or copy assignment operator, it will copy the *pointer value*, not the object it points to. Now two `Dog` objects share one `Brain`, and when one is destroyed and deletes its brain, the other is left with a dangling pointer.

A **deep copy** means: when you copy a `Dog`, you allocate a *new* `Brain` and copy the *contents*, so each `Dog` fully owns its own independent `Brain`. This is exactly why Orthodox Canonical Form (copy constructor + copy assignment operator, written explicitly) from CPP00 becomes essential again here — the compiler's defaults are actively dangerous once you hold owned pointers.

### 1.7 Abstract classes

An abstract class is a class that can never be instantiated directly — it exists purely to be inherited from. You make a class abstract by giving it at least one **pure virtual function**:

```cpp
class Animal {
public:
    virtual void makeSound() const = 0; // pure virtual
};
```

The `= 0` means: "this class does not provide an implementation; any concrete (instantiable) derived class *must* provide one, or it becomes abstract too." Trying to write `Animal a;` after this will fail to compile.

Conceptually, this is how you turn "this shape sort of works as a general concept, but doesn't make sense as a standalone object" into something the compiler enforces for you. It doesn't make sense to have a generic `Animal` that makes a generic, unspecified sound — every real animal is a specific kind. Making `Animal` abstract encodes that rule directly into the type system, rather than just as a comment or a convention.

Note: an abstract class can still have regular (non-pure) member functions, member variables, and even a constructor/destructor (which get called as part of building/destroying derived objects) — it just can't be instantiated on its own.

### 1.8 Interfaces

C++ doesn't have a dedicated `interface` keyword like Java or C#. Instead, the convention is: a class that contains **only pure virtual functions and no member data at all** is treated as an interface. By convention (and 42 enforces this), interface class names are prefixed with `I` (e.g. `ICharacter`).

The purpose is different from an abstract class with shared logic: an interface is a pure *contract* — "any class that implements me guarantees it has these functions" — with zero shared implementation or state. A class can inherit from multiple interfaces (multiple inheritance is generally fine here specifically *because* interfaces carry no data, sidestepping most of the usual problems with multiple inheritance).

### 1.9 How these ideas connect

Put together, the module's arc is:
1. Learn that a common base type + virtual functions lets derived-specific behavior run automatically (ex00).
2. Learn that owning dynamically allocated data means you must handle copying carefully, and that destructors must be virtual to avoid leaks in a polymorphic hierarchy (ex01).
3. Learn to make a base class impossible to misuse as a standalone object, by making it abstract (ex02).
4. Learn to separate "pure contract" (interface) from "abstract class with some shared behavior," and combine both via inheritance (ex03).

---

## Part 2 — Walking Through the Exercises

*(Exact wording can vary slightly by 42 campus/subject version — always check your own subject PDF for the literal requirements. The structure below reflects the standard version of CPP04.)*

### ex00 — Polymorphism (Animal, Dog, Cat)

**Goal:** Build `Animal`, `Dog`, and `Cat`, where `Dog` and `Cat` inherit from `Animal`. Give `Animal` a protected `std::string type` and a `makeSound()` member function; override it in `Dog` and `Cat` to produce different output.

**Step by step:**
1. Write `Animal` in Orthodox Canonical Form (default constructor, copy constructor, copy assignment, destructor), setting `type = "Animal"` in the default constructor.
2. Give `Animal::makeSound()` a body (even a generic one) and mark it `virtual`.
3. Write `Dog` and `Cat` inheriting `public Animal`, setting `type` appropriately in their constructors, and overriding `makeSound()`.
4. In `main`, test the slicing trap directly: create an array or vector of `Animal*` where some point to `Dog` and some to `Cat`, and call `makeSound()` through the base pointer on each — confirm you get the derived behavior.
5. Also test what happens when you assign a `Dog` object into an `Animal` object by value, to see slicing happen and understand *why* it's different from the pointer case.

**Common pitfalls:** forgetting `virtual` on `makeSound()` (then everything silently calls `Animal`'s version, and it's easy not to notice since it still compiles and runs); not testing both the pointer case and the by-value slicing case.

### ex01 — "I don't want to set the world on fire" (Brain)

**Goal:** Give `Dog` and `Cat` a private `Brain*` attribute. `Brain` holds an array of ideas (commonly `std::string ideas[100]`). The brain is `new`'d in the constructor and `delete`'d in the destructor.

**Step by step:**
1. Write a simple `Brain` class (Orthodox Canonical Form again) holding the ideas array.
2. In `Dog`/`Cat`, allocate `brain = new Brain();` in the constructor, and `delete brain;` in the destructor.
3. **This is the deep-copy exercise**, so you must write the copy constructor and copy assignment operator explicitly for `Dog`/`Cat`: each must allocate a *new* `Brain` and copy its contents, rather than copying the pointer.
4. Make `Animal`'s destructor `virtual` here if you haven't already, and test: create a `Dog` via `new`, store it in an `Animal*`, then `delete` through that base pointer, and confirm (mentally, or with prints in the destructors) that `Dog`'s destructor — and therefore `Brain`'s destructor — actually runs.
5. Test copying a `Dog` (via copy constructor and via assignment) and confirm each copy has an independent `Brain` (e.g., changing one doesn't affect the other, and both destructors run cleanly without a double free).

**Common pitfalls:** relying on the compiler-generated copy constructor (shallow copy → double free, or one dog's brain-edit shows up in the other); forgetting the virtual destructor from ex00's lesson and leaking every `Brain`.

### ex02 — Abstract class

**Goal:** Make `Animal` abstract, so `Animal a;` no longer compiles, while everything else keeps working exactly as before.

**Step by step:**
1. Turn `makeSound()` into a pure virtual function: `virtual void makeSound() const = 0;` in `Animal`.
2. Remove any code that instantiates a plain `Animal` directly.
3. Note that `Animal` still needs a real (non-pure) constructor and destructor — those still run as part of constructing/destroying `Dog`/`Cat` objects, they're just never called to build a standalone `Animal`.
4. Rebuild everything and confirm `Dog` and `Cat` still work exactly as in ex01 (array of `Animal*` pointing to concrete animals, deep copies, correct destruction).

**Common pitfalls:** thinking a pure virtual function *must* be left with no body at all — you're actually allowed to give a pure virtual function a body if you want (callable via `Animal::makeSound()`), though it's not required for this exercise; forgetting that "abstract" only blocks direct instantiation, not inheritance or pointer usage.

### ex03 — Interfaces and recap (materia/character-style exercise)

**Goal:** This exercise is usually more involved, and is where interfaces, abstract classes, and Orthodox Canonical Form all get combined into one bigger system (classically: a magic-materia/character system, e.g. `AMateria`, `ICharacter`, `IMateriaSource`).

**Step by step (general shape, check your exact subject):**
1. Identify which class is a pure interface (only pure virtual functions, no data) — this becomes your `I`-prefixed class, e.g. `ICharacter`.
2. Identify which class is abstract but *does* hold shared data/behavior — this becomes your `A`-prefixed abstract class, e.g. `AMateria`, which might hold a `std::string type` and shared logic, but leaves specific behaviors (like `use()`) pure virtual.
3. Build the concrete classes that inherit from the abstract class and implement the interface(s), giving each its specific behavior.
4. Pay close attention to a `clone()`-style pure virtual function if your subject requires one — this is the "virtual constructor" pattern: since you can't call `new AMateria()` (abstract), each concrete subclass must know how to make a copy of *itself* and return it as a base-class pointer. This is a very common and important C++ idiom, worth understanding on its own.
5. Wire everything together as required (e.g., an inventory/holder class that stores materias by base-class pointer, calling `clone()` when it needs a copy) and test extensively through base-class pointers/references to be sure polymorphism is working everywhere it should.

**Common pitfalls:** giving the abstract class a `clone()` that isn't pure virtual (each subclass must provide its own); mixing up which class should be the "pure contract" interface versus the "abstract class with some shared implementation" — re-read 1.7 vs 1.8 if this is unclear.

---

## Part 3 — Defense Preparation

42 defenses on this module tend to probe the *why*, not just the *what*. Questions to be ready for, out loud, without notes:

- Explain, with a diagram or example, the difference between the static type and dynamic type of a pointer.
- Why does calling a non-virtual function through a base pointer *not* give you polymorphic behavior, but a virtual one does?
- Demonstrate object slicing live, and explain exactly why it happens.
- Why must a destructor be virtual in a polymorphic base class? What breaks if it isn't (walk through the leak step by step)?
- What's the difference between a shallow copy and a deep copy, and why does it matter once a class owns a pointer to dynamically allocated memory?
- What makes a class abstract? Can an abstract class have a constructor? Can it have non-pure member functions?
- What's the difference between an abstract class and an interface in C++, given that the language has no `interface` keyword?
- Why does the `clone()` pattern exist, and why can't you just call `new AMateria()` directly?

---

## References

- [cppreference — Virtual function](https://en.cppreference.com/w/cpp/language/virtual) — the canonical technical reference for virtual dispatch, overriding, and pure virtual functions.
- [cppreference — Abstract class](https://en.cppreference.com/w/cpp/language/abstract_class) — formal rules on what makes a class abstract and what it can/can't do.
- [cppreference — Object slicing note](https://en.cppreference.com/w/cpp/language/object_slicing) — short, precise explanation of slicing.
- [isocpp.org C++ FAQ — Virtual Functions](https://isocpp.org/wiki/faq/virtual-functions) — one of the best plain-English explanations of virtual dispatch, late binding, and pure virtual functions, written for people learning the concept for the first time.
- [isocpp.org C++ FAQ — Abstract Classes](https://isocpp.org/wiki/faq/abcs) — dedicated FAQ page on abstract classes specifically.
- Scott Meyers, *Effective C++*, Item 7: "Declare destructors virtual in polymorphic base classes" — a classic, precise treatment of exactly why this matters; widely summarized online if you don't have the book.
- [42's own Piscine C++ Modules repos on GitHub](https://github.com/search?q=42+cpp04&type=repositories) — useful for comparing subject wording and seeing how other students structured their `Animal`/`AMateria` hierarchies (never copy code, but comparing design decisions after you've solved it yourself is a good way to sanity-check your understanding before a defense).

---

*A note on approach: since you're building on CPP02 (Fixed-point class, Orthodox Canonical Form practice) right now, the most useful bridge to CPP04 is to keep leaning on the discipline you're already building there — write the canonical form explicitly every time, and reason about ownership (who allocates, who frees) before writing a single line of derived-class code.*
