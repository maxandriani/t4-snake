using namespace std;

class Food: public Element {
	int    size;
	bool   isPoison;

	void Food(int width, int height, int x, int y, int size, bool isPoison);
}

void   Food::Food(int w, int h, int x, int y, int size, bool isPoison){
	Parent::Element(w, h, x, y);
	this->size = size;
	this->isPoison = isPoison;
}