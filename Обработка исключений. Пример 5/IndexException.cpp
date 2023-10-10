#include "IndexException.h"

IndexException::IndexException(const char* mes) : Exception(mes)
{
}

const char* IndexException::GetMessage() const
{
    return m_message;
}
