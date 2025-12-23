#include <iostream>
using namespace std;

class clsCalculator
{

private:
    float _Result = 0;
    float _LastNumber = 0;
    string _LastOperation = "Clear";
    float _PreviousResult = 0;

    bool _IsZero(float Number) {
        // «ﬂ » „‰ÿﬁ «· Õﬁﬁ „‰ «·’›— Â‰«
        return (Number == 0);
    }

public:
    void Add(float Number) {
        // «ﬂ » „‰ÿﬁ «·Ã„⁄ Â‰«
        _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Adding";
        _Result += Number;
    }

    void Subtract(float Number) {
        // «ﬂ » „‰ÿﬁ «·ÿ—Õ Â‰«
        _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Subtracting";
        _Result -= Number;
    }

    void Divide(float Number) {
        // «ﬂ » „‰ÿﬁ «·ﬁ”„… Â‰«
        _LastNumber = Number;
        if (_IsZero(Number))
            Number = 1;
        _PreviousResult = _Result;
        _LastOperation = "Dividing";
        _Result /= Number;
    }

    void Multiply(float Number) {
        // «ﬂ » „‰ÿﬁ «·÷—» Â‰«
        _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Multiplying";
        _Result *= Number;
    }

    float GetFinalResults() {
        // «—Ã⁄ «·‰ ÌÃ… «·‰Â«∆Ì… Â‰«
        return _Result;
    }

    void Clear() {
        // «ﬂ » „‰ÿﬁ «· ’›Ì… (Reset) Â‰«
        _LastNumber = 0;
        _PreviousResult = 0;
        _LastOperation = "Clear";
        _Result = 0;
    }

    void CancelLastOperation() {
        // «ﬂ » „‰ÿﬁ ≈·€«¡ ¬Œ— ⁄„·Ì… Â‰«
        _LastNumber = 0;
        _LastOperation = "Cancel Last Operation";
        _Result = _PreviousResult;
    }

    void PrintResult() {
        // «ﬂ » „‰ÿﬁ ÿ»«⁄… «·‰ ÌÃ… Â‰«
        cout << "Result ";
        cout << "After " << _LastOperation
             << " " << _LastNumber << " is: " << _Result << "\n";

    }
};

int main()
{

    clsCalculator Calculator1;
    
    Calculator1.Add(10);
    Calculator1.PrintResult();
    Calculator1.Multiply(5);
    Calculator1.PrintResult();

    Calculator1.CancelLastOperation();
    Calculator1.PrintResult();

    system("pause>0");
    return 0;
}
