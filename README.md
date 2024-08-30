Inheritance and Access Specifiers

This C++ program demonstrates the use of inheritance and access specifiers (private, protected, and public) in classes. The program defines a base class Base with private, protected, and public members, and three derived classes Derived_Private, Derived_Protected, and Derived_Public that inherit from Base using private, protected, and public inheritance, respectively.

Errors

The program intentionally attempts to access private and protected members of the base class from the derived classes, resulting in compilation errors. The errors are:

- error: 'int Base::secret' is private - This error occurs when trying to access the private member secret from the derived classes.
    - Reason: Private members are inaccessible from derived classes, regardless of the inheritance type.
- error: 'int Base::protect' is protected - This error occurs when trying to access the protected member protect from the derived classes using private inheritance.
    - Reason: Protected members are not accessible using private inheritance.
- error: 'int Base::access' is public but inaccessible due to private inheritance - This error occurs when trying to access the public member access from the derived class Derived_Private due to private inheritance.
    - Reason: Public members are not accessible using private inheritance.

Explanation

- Private members (secret) are inaccessible from derived classes, regardless of the inheritance type.
- Protected members (protect) are accessible from derived classes using protected or public inheritance, but not private inheritance.
- Public members (access) are accessible from derived classes using public inheritance, but not private inheritance.

Output

When compiled, the program will display the following errors:

error: 'int Base::secret' is private
error: 'int Base::protect' is protected
error: 'int Base::access' is public but inaccessible due to private inheritance

Note: The program is intentionally written to demonstrate errors and will not compile successfully.
Reason: Public members are not accessible using private inheritance.

AUTHOR[NAYAB]

VERSION[2.0]
