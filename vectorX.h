//vector header file

//for making vector support many datatypes, we use generalized datatype T
template<typename T>

class Vector{

  T *arr;
  int cs;
  int ms;

public:
  //constructor
  Vector(int max_size=1){
    cs = 0;
    ms = max_size;
    arr = new int[ms];
  }

  // push back fn.
  void push_back(const T d){

    if(cs == ms){
      T *oldArr = arr;
      ms = 2*ms;
      arr = new T[ms];
      for(int i=0;i<cs;i++){
        arr[i]=oldArr[i];
      }
      delete [] oldArr;

    }
    arr[cs]=d;
    cs++;
  }

  void pop_back(){
    cs--;
  }

  T front() const{
    return arr[0];
  }

  T back() const{
    return arr[cs-1];
  }

  T at(int i) const{
    return arr[i];
  }

  int size() const{
    return cs;
  }

  int capacity() const{
    return ms;
  }

///////////operator overloading
  T operator[](const int i) const{
    return arr[i];
  }


};
