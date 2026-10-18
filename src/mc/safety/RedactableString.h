#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Bedrock::Safety {

class RedactableString {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                mUnredactedString;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mRedactedString;
#else // @header-generator platform
    ::std::string                  mUnredactedString;
    ::std::optional<::std::string> mRedactedString;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RedactableString();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RedactableString(::Bedrock::Safety::RedactableString const&);
#else // @header-generator platform
    MCAPI RedactableString(::Bedrock::Safety::RedactableString const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RedactableString(::Bedrock::Safety::RedactableString&&);
#else // @header-generator platform
    MCAPI explicit RedactableString(::std::string const& unredactedString);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit RedactableString(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void clear();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RedactableString(std::string&&, std::optional<std::string>&&);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> erase(uint64 offset, uint64 count);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void append(std::string);
#else // @header-generator platform
    MCAPI ::Bedrock::Safety::RedactableString& operator+=(::std::string const& unredactedSuffix);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void append(::Bedrock::Safety::RedactableString const&);
#else // @header-generator platform
    MCAPI void operator+=(::Bedrock::Safety::RedactableString const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clear();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Bedrock::Safety::RedactableString& operator=(::Bedrock::Safety::RedactableString&&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> erase(ulong, ulong);
#else // @header-generator platform
    MCFOLD ::Bedrock::Safety::RedactableString& operator=(::Bedrock::Safety::RedactableString const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& get(bool) const;
#else // @header-generator platform
    MCAPI ::Bedrock::Safety::RedactableString& operator=(char const* unredactedCString);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::string> const& getRedacted() const;
#else // @header-generator platform
    MCAPI ::Bedrock::Safety::RedactableString& operator=(::std::string&& unredactedString);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::string>&& getRedacted();
#else // @header-generator platform
    MCAPI bool operator==(::Bedrock::Safety::RedactableString const& rhs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool const hasRedacted() const;
#else // @header-generator platform
    MCAPI void set(::std::string&& unredactedString);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Safety::RedactableString operator+(std::string const&) const;
#else // @header-generator platform
    MCAPI void set(::std::string const& unredactedString);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~RedactableString();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::Safety::RedactableString const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Bedrock::Safety::RedactableString const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::Safety::RedactableString&&);

    MCNAPI void* $ctor(std::string const&);

    MCNAPI void* $ctor(std::string&&, std::optional<std::string>&&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& unredactedString);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Safety
