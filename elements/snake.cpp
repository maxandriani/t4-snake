using namespace std;

class Snake: public Element {
   public:
	 		SnakeNode *next;
			SnakeNode *prev;
			bool      isHead;
			bool      isTail;

      void Snake(int x, int y, SnakeNode *next);
}

void Snake::Snake(int w, int h, int x, int y, SnakeNode *next){
	Parent::Element(w, h, x, y);

	this->isHead = true;
	this->isTail = false;
	this->next	 = next;
	this->prev   = NULL;
}