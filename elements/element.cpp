using namespace std;

class Element {
	public:
		int x;
		int y;
		int width;
		int height;

		void render();
		void Element(int width, int height, int x, int y);
}

void Element::Element(int width, int height, int x, int y){
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
}

void Element::render(){
	// TODO
}