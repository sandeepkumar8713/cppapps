#include <iostream>
#include <string>
#include <string_view>
#include <iostream>

class Shape{
public:
    Shape() = default;
    Shape(std::string_view description);
    ~Shape();

     virtual void draw() const{
        std::cout << "Shape::draw() called. Drawing " << m_description << std::endl;
    }

protected :
    std::string m_description{""};
};

Shape::Shape(std::string_view description)
    : m_description(description)
{
}

Shape::~Shape()
{
}

class Oval : public Shape
{
public:
    Oval()= default;
    Oval(double x_radius, double y_radius,
                std::string_view description);
    ~Oval();

    virtual void draw() const{
        std::cout << "Oval::draw() called. Drawing " << m_description <<
            " with m_x_radius : " << m_x_radius << " and m_y_radius : " << m_y_radius
                    << std::endl;
    }

public:
    double get_x_rad() const{
        return m_x_radius;
    }

    double get_y_rad() const{
        return m_y_radius;
    }

private :
    double m_x_radius{0.0};
    double m_y_radius{0.0};
};

Oval::Oval(double x_radius, double y_radius,
                std::string_view description)
    : Shape(description),m_x_radius(x_radius), m_y_radius(y_radius)
{
}

Oval::~Oval()
{
}

class Circle : public Oval
{
public:
    Circle() = default;
    Circle(double radius,std::string_view description);
    ~Circle();

    virtual void draw() const{
        std::cout << "Circle::draw() called. Drawing " << m_description <<
            " with radius : " << get_x_rad() << std::endl;
    }

};

Circle::Circle(double radius , std::string_view description)
    : Oval(radius,radius,description)
{
}

Circle::~Circle()
{
}

// Using pointer
void draw_shape(Shape * s){
    s->draw();
}

// Using reference
void draw_shape_v1(const Shape& s_r){
    s_r.draw();
}


int main(){

    Shape shape1("Shape1");
    //shape1.draw();

    Oval oval1(2.0,3.5,"Oval1");
    //oval1.draw();

    Circle circle1(3.3,"Circle1");
    //circle1.draw();



    //Base pointers
    Shape * shape_ptr = &shape1;
    //shape_ptr->draw(); // Shape::draw

    shape_ptr = &oval1;
    //shape_ptr->draw(); // Oval::draw()

    shape_ptr = &circle1;
    //shape_ptr->draw(); // Circle::draw()


    //Base references
    Shape& shape_ref = circle1;
    //shape_ref.draw(); // Cicle::draw()



    //Drawing shapes
    //draw_shape(&circle1);
    //draw_shape_v1(circle1);


    //Raw pointers
    shape_ptr  = &oval1;
    //shape_ptr->get_x_rad();


    //Shapes stored in collections
    Shape* shape_collection[]{&shape1,&oval1,&circle1};

	 for(Shape* s_ptr : shape_collection){
        s_ptr->draw();
    }

    return 0;
}