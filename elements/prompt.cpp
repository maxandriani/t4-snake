#include <cstring>

using namespace std;

class Prompt: public Element {
	public:
		string title;
		string message;

		void Prompt(int w, int h, int x, int y, string t, string m);
}

void Prompt::Prompt(int w, int h, int x, int y, string t, stirng, m){
	Parent::Element(w, h, x, y);
	this->title = t;
	this->message = m;
}