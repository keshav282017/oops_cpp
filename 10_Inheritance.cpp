





//*1. class Cuboid : public Rectangle
// All the public members of Rectangle will remain public in Cuboid.
// All the protected members of Rectangle will remain protected in Cuboid.
// The private members of Rectangle remain inaccessible to Cuboid, but any getters/setters of private members (if they exist) will be accessible.
// This is typically used when you want to maintain the original access control of the base class.


//* 2. class Cuboid : protected Rectangle
// All the public members of Rectangle become protected in Cuboid.
// All the protected members of Rectangle remain protected in Cuboid.
// The private members of Rectangle remain inaccessible, similar to public inheritance.
// This is used when you want to restrict access to the members of Rectangle but still allow derived classes to access them.


//* 3. class Cuboid : private Rectangle
// All the public and protected members of Rectangle become private in Cuboid.
// The private members of Rectangle remain inaccessible.
// This is typically used when you want to
//  hide the implementation details of the base class from the users of Cuboid.


//* Summary:
// Public inheritance: You preserve the original access of the base class members.
// Protected inheritance: You make all members of the base class either protected or private, hiding them from users of Cuboid.
// Private inheritance: You hide the base class members completely from users of Cuboid, 
// treating them as private within Cuboid.
