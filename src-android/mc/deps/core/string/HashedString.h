#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HashedString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                 mStrHash;
    ::ll::TypedStorage<8, 24, std::string>          mStr;
    ::ll::TypedStorage<8, 8, ::HashedString const*> mLastMatch;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit HashedString(std::nullptr_t);

    MCNAPI HashedString(::HashedString const&);

    MCNAPI HashedString(::HashedString&&);

    MCNAPI explicit HashedString(char const*);

    MCNAPI explicit HashedString(std::string const&);

    MCNAPI explicit HashedString(std::string_view);

    MCNAPI HashedString(ulong, char const*);

    MCNAPI HashedString(ulong, std::string);

    MCNAPI char const* c_str() const;

    MCNAPI void clear();

    MCNAPI bool empty() const;

    MCNAPI ulong getHash() const;

    MCNAPI uint getHash32Bits() const;

    MCNAPI std::string const& getString() const;

    MCNAPI bool isEmpty() const;

    MCNAPI ::HashedString& operator=(::HashedString const&);

    MCNAPI ::HashedString& operator=(::HashedString&&);

    MCNAPI ~HashedString();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ulong computeHash(char const*);

    MCNAPI static ulong computeHash(std::string const&);

    MCNAPI static ::HashedString const& getEmptyString();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& defaultErrorValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::nullptr_t);

    MCNAPI void* $ctor(::HashedString const&);

    MCNAPI void* $ctor(::HashedString&&);

    MCNAPI void* $ctor(char const*);

    MCNAPI void* $ctor(std::string const&);

    MCNAPI void* $ctor(std::string_view);

    MCNAPI void* $ctor(ulong, char const*);

    MCNAPI void* $ctor(ulong, std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
