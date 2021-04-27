#include <raylib/raylib.h>

class Line{
private:
  Vector2 points[2];

public:
  void SetPoints(Vector2 point1, Vector2 point2){
    points[0] = point1;
    points[1] = point2;
  }

  Vector2 diff(){
    return (Vector2){points[1].x - points[0].x, points[1].y - points[0].y};
  }

  float gradient(){
    return points[0].y/points[0].x;
  }

  float y_intercept(){
    return points[0].y-points[0].x*gradient();
  }

  float x_intercept(){
    return points[0].x-points[0].y/gradient();
  }
};