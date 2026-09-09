#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Bedrock::Safety {

class RedactableString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                mUnredactedString;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mRedactedString;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RedactableString(::Bedrock::Safety::RedactableString const&);

    MCNAPI RedactableString(::Bedrock::Safety::RedactableString&&);

    MCNAPI explicit RedactableString(std::string const&);

    MCNAPI RedactableString(std::string&&, std::optional<std::string>&&);

    MCNAPI void append(std::string);

    MCNAPI void append(::Bedrock::Safety::RedactableString const&);

    MCNAPI void clear();

    MCNAPI ::Bedrock::Result<void, std::error_code> erase(ulong, ulong);

    MCNAPI std::string const& get(bool) const;

    MCNAPI std::optional<std::string> const& getRedacted() const;

    MCNAPI std::optional<std::string>&& getRedacted();

    MCNAPI bool const hasRedacted() const;

    MCNAPI ::Bedrock::Safety::RedactableString operator+(std::string const&) const;

    MCNAPI ::Bedrock::Safety::RedactableString& operator+=(std::string const&);

    MCNAPI void operator+=(::Bedrock::Safety::RedactableString const&);

    MCNAPI ::Bedrock::Safety::RedactableString& operator=(::Bedrock::Safety::RedactableString const&);

    MCNAPI ::Bedrock::Safety::RedactableString& operator=(::Bedrock::Safety::RedactableString&&);

    MCNAPI ::Bedrock::Safety::RedactableString& operator=(std::string&&);

    MCNAPI ::Bedrock::Safety::RedactableString& operator=(char const*);

    MCNAPI bool operator==(::Bedrock::Safety::RedactableString const&) const;

    MCNAPI void set(std::string&&);

    MCNAPI void set(std::string const&);

    MCNAPI void setRedacted(std::optional<std::string>&&);

    MCNAPI ~RedactableString();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::Safety::RedactableString const&);

    MCNAPI void* $ctor(::Bedrock::Safety::RedactableString&&);

    MCNAPI void* $ctor(std::string const&);

    MCNAPI void* $ctor(std::string&&, std::optional<std::string>&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Safety
