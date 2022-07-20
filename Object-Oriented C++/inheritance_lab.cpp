#include <iostream>
using namespace std;


class Line {
    private:
        int length;

    public:
        Line(int l) {
            length = l;
        }

        int GetLength() {
            return length;
        }

        void DrawLine() {
            for (int i = 0; i < length; i++) {
                cout << '*';
            }
            cout << endl;
        }

};

class Box : public Line {

    private:
        int width;

    public:
        Box(int l, int w) : Line(l) {
            width = w;
        }

        int GetWidth() {
            return width;
        }

        void DrawBox() {
            for (int i = 0; i < width; i++) {
                DrawLine();
            }
        }
};

class Pattern : public Box {
  public:
    Pattern(int l, int w) : Box(l, w) {} 
  
    void DrawPattern() {
      for (int i = 0; i < GetLength(); i++) {
        if (i % 2 == 0) {
          for (int j = 0; j < GetWidth(); j++) {
            if ( (j % 2 == 0) ) {
              cout << '*';
            }
            else {
              cout << ' ';
            }
          }
          cout << endl;
        }
        if (i % 2 == 1) {
          for (int j = 0; j < GetWidth(); j++) {
            if ( (j % 2 == 0) ) {
              cout << ' ';
            }
            else {
              cout << '*';
            }
          }
          cout << endl;
        }
      }
    }
};


//DO NOT EDIT code below this line

class MP3 {
  public: 
    MP3(string t, int l, string g, string al, string ar) {
      title = t;
      album = al;
      length = l;
      genre = g;
      artist = ar;
    }

    string GetTitle() {
      return title;
    }

    void SetTitle(string new_title) {
      title = new_title;
    }

    int GetLength() {
      return length;
    }

    void SetLength(int new_length) {
      length = new_length;
    }

    string GetGenre() {
      return genre;
    }

    void SetGenre(string new_genre) {
      genre = new_genre;
    }

    string GetAlbum() {
      return album;
    }

    void SetAlbum(string new_album) {
      album = new_album;
    }
  
    string GetArtist() {
      return artist;
    }

    void SetArtist(string new_artist) {
      artist = new_artist;
    }
  
  private:
    string title;
    int length;
    string genre;
    string album;
    string artist;
};

//DO NOT EDIT code above this line

class Podcast : public MP3 {
    private:
        string name;
        string date;

    public:
        Podcast(string t, int l, string g, string n, string d) : MP3(t, l, g, n, d){
            name = n;
            date = d;
        }

        void DisplayTitle() {
            cout << "The title is " << GetTitle() << endl;
        }     

        void DisplayLength() {
            cout << "The length is " << GetLength() << endl;
        } 

        void DisplayGenre() {
            cout << "The genre is " << GetGenre() << endl;
        }   

        void DisplayName() {
            cout << "The name is " << name << endl;
            cout << GetAlbum() << endl;
        }

        void DisplayDate() {
            cout << "The date is " << date << endl;
            cout << GetArtist() << endl;
        } 

};



int main() {

    Line line(10);
    line.DrawLine();

    Box box(10, 10);
    box.DrawBox();

    Pattern pattern(10, 10);
    pattern.DrawPattern();

    //DO NOT EDIT code below this line

    Podcast p("Hollywood Black List", 1460, "economics", "Planet Money", "10 July 2020");
    p.DisplayTitle();
    p.DisplayLength();
    p.DisplayGenre();
    p.DisplayName();
    p.DisplayDate();

    //DO NOT EDIT code above this line

    return 0;
}