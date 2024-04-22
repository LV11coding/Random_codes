#define button1 1
#define button2 2
#define button3 3

struct buttons {
  bool btn1 = false;
  bool btn2 = false;
  bool btn3 = false;
} mystruct;

enum class choises {
  unknown,
  rock,
  paper,
  scissors
};

choises converter(struct buttons) {
  if (mystruct.btn1 == true) {
    return choises::rock;
  }
  if (mystruct.btn2 == true) {
    return choises::paper;
  }
  if (mystruct.btn3 == true) {
    return choises::scissors;
  }
  if (mystruct.btn1 == false && mystruct.btn2 == false && mystruct.btn3 == false){
    return choises::unknown;
  }
}


void setup() {
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
}

void loop() {
}
