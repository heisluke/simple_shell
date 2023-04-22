int sample_func(char suffix)
{
	int var;

	var = 0;
	switch (suffix)
	{
	case 'G':
	case 'g':
		var = 30;
		break;
	case 'M':
	case 'm':
		var = 20;
		break;
	case 'K':
	case 'k':
		var = 10;
	default:
		break;
	}
	return (var);
}
