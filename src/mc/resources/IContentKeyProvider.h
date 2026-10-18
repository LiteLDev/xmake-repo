#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
// clang-format on

class IContentKeyProvider : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IContentKeyProvider() = default;
#else // @header-generator platform
    virtual ~IContentKeyProvider() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getContentKey(::ContentIdentity const&) const = 0;
#else // @header-generator platform
    virtual ::std::string getContentKey(::ContentIdentity const& contentIdentity) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getAlternateContentKey(::ContentIdentity const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ::std::string getAlternateContentKey(::ContentIdentity const&) const;
#else // LL_PLAT_C
    virtual ::std::string getAlternateContentKey(::ContentIdentity const& contentIdentity) const;
#endif
#endif // @header-generator platform

    virtual bool requireEncryptedReads() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTempContentKeys(std::unordered_map<ContentIdentity, std::string> const&) = 0;
#else // @header-generator platform
    virtual void setTempContentKeys(::std::unordered_map<::ContentIdentity, ::std::string> const& keys) = 0;
#endif // @header-generator platform

    virtual void clearTempContentKeys() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getAlternateContentKey(::ContentIdentity const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI ::std::string $getAlternateContentKey(::ContentIdentity const&) const;
#else // LL_PLAT_C
    MCNAPI ::std::string $getAlternateContentKey(::ContentIdentity const& contentIdentity) const;
#endif
#endif // @header-generator platform

    MCNAPI bool $requireEncryptedReads() const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND
};
