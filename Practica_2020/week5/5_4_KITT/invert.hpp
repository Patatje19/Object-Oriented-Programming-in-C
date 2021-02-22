#include "hwlib.hpp"


class invert : public hwlib::pin_out {
private:
	hwlib::pin_out & slave;

public:
	invert( hwlib::pin_out & slave ): slave( slave ) {}

	void write( bool x ) override;

	void flush() override;

};
