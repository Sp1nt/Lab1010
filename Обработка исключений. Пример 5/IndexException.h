#pragma once
#include "Exception.h"
class IndexException : public Exception
{
public:
	IndexException(const char* mes);

	virtual const char* GetMessage() const;
};

