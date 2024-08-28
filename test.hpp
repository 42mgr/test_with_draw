class Test {
  private:
    int num = 5;
  public:
    int getNum();
#if DRAW
    void setNum();
#endif
}
