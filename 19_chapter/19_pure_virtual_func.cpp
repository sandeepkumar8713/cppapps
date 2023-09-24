#include <iostream>

class Shape
{
    protected:
        Shape() = default;
        Shape(std::string_view description);
    public :
        virtual ~Shape() = default; // If destructor is not public, you won't be
                                // able to delete base_ptrs. SHOW THIS TO STUDENTS
        //Pure virtual functions
        virtual double perimeter() const = 0;
        virtual double surface() const = 0;
    private :
        std::string m_description;
};

Shape::Shape(std::string_view description)
    : m_description(description)
{

}

class Circle : public Shape
{
public:
    Circle() = default;
    Circle(double radius , std::string_view  description);
    virtual ~Circle()= default;

    virtual double perimeter() const {
        return (2 * PI * m_radius);
    }

    virtual double surface() const {
        return PI * m_radius* m_radius;
    }


private:
    double m_radius{0.0};

    inline static double PI{3.14159265};
};

Circle::Circle(double radius , std::string_view  description)
    : Shape(description) ,
        m_radius(radius)
{
}



int main(){

   //Shape * shape_ptr = new Shape; // Compiler error
    // const Shape * shape_rect = new Rectangle(10,10,"rect1");
    // double surface = shape_rect->surface();
    // std::cout << "dynamic type of shape_rect : " << typeid(*shape_rect).name() << std::endl;
    // std::cout << "The surface of shape rect is : " << surface << std::endl;

    std::cout << "--------------" << std::endl;

    const Shape * shape_circle = new Circle(10,"circle1");
    double surface = shape_circle->surface();
    std::cout << "dynamic type of shape_circle : " << typeid(*shape_circle).name() << std::endl;
    std::cout << "The surface of the circle is : " << surface << std::endl;
    return 0;
}