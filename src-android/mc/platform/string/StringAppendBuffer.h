#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class StringAppendBuffer : public ::std::streambuf {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::string&> mTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    StringAppendBuffer& operator=(StringAppendBuffer const&);
    StringAppendBuffer(StringAppendBuffer const&);
    StringAppendBuffer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StringAppendBuffer();

    virtual long xsputn(char const*, long);

    virtual int overflow(int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI long $xsputn(char const*, long);

    MCNAPI int $overflow(int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
