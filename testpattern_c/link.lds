ENTRY(_start)


SECTIONS
{
	. = 0x000000000;	
	_text0 = .;
	.text0 :
	{
		_start_text_0 = .;
		boot.o(.start)
		_end_text_0 = .;
	}

	. = 0x00000010;	
	_text1 = .;
	.text1 :
	{
		_start_text_1 = .;
		app.o(.text)
		_end_text_1 = .;
	}

	
}

