#ifndef ACTUALCLASS_H
#define ACTUALCLASS_H

class ActualClass
{
public:
  ActualClass(double value);
  double getValue();
  double add(double toAdd);

private:
  double value_;
};

#endif
