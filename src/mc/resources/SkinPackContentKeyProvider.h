#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/resources/IContentKeyProvider.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
// clang-format on

class SkinPackContentKeyProvider : public ::IContentKeyProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkinPackContentKeyProvider();

    virtual std::string getContentKey(::ContentIdentity const&) const;

    virtual void setTempContentKeys(std::unordered_map<ContentIdentity, std::string> const&);

    virtual void clearTempContentKeys();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SkinPackContentKeyProvider();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string $getContentKey(::ContentIdentity const&) const;

    MCNAPI void $setTempContentKeys(std::unordered_map<ContentIdentity, std::string> const&);

    MCNAPI void $clearTempContentKeys();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class SkinPackContentKeyProvider {};
#endif // @header-generator platform
