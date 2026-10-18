#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/shared_types/PieceType.h"

// auto generated forward declare list
// clang-format off
class CatalogPropertyBag;
class DateManager;
class JsonFileIO;
class StoreCatalogItem;
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class CatalogInfo {
public:
    // CatalogInfo inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class OfferType : ushort {
        StoreDurable   = 0,
        PersonaDurable = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonFileIO>>  mFileIO;
    ::ll::TypedStorage<8, 16, std::shared_ptr<DateManager>> mDateManager;
    ::ll::TypedStorage<4, 4, int>                           mPropertyChangeVersion;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CatalogInfo();

    MCNAPI void _cleanUpJson();

    MCNAPI long getMarketplaceNextContentFetchTime() const;

    MCNAPI bool hasSeenDefaultCastPrompt(std::string const&) const;

    MCNAPI bool hasSeenSonyTokensPrompt(std::string const&) const;

    MCNAPI void setHasSeenDefaultCastPrompt(std::string const&);

    MCNAPI void setHasSeenSonyTokensPrompt(std::string const&, bool);

    MCNAPI void setMarketplaceNextContentFetchTime(long);

    MCNAPI void setOfferViewed(std::string const&, std::string const&);

    MCNAPI void setShouldFetchNewPersonaOffers(bool);

    MCNAPI void update();

    MCNAPI ~CatalogInfo();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<std::string>& mFilePath();

    MCNAPI static ::CatalogPropertyBag& mInfo();
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
#else // @header-generator platform
    enum class OfferType : ushort {};
#endif // @header-generator platform
};
