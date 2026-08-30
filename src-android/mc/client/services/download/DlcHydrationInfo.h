#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/content_binary/Type.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/ServiceReference.h"

// auto generated forward declare list
// clang-format off
struct CommonContent;
struct CommonDocument;
namespace Json { class Value; }
namespace flighting { class IFlightReader; }
// clang-format on

class DlcHydrationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                mTitle;
    ::ll::TypedStorage<8, 24, std::string>                mContentId;
    ::ll::TypedStorage<8, 24, std::string>                mContentUrl;
    ::ll::TypedStorage<8, 24, std::vector<PackIdVersion>> mPackIdentities;
    ::ll::TypedStorage<1, 1, bool>                        mTitleLocked;
    ::ll::TypedStorage<1, 1, bool>                        mIsOptimized;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DlcHydrationInfo();

    MCNAPI DlcHydrationInfo(::DlcHydrationInfo const&);

    MCNAPI DlcHydrationInfo(::DlcHydrationInfo&&);

    MCNAPI DlcHydrationInfo(::PackIdVersion const&, ::Core::PathBuffer<std::string> const&);

    MCNAPI DlcHydrationInfo(::CommonDocument const&, std::vector<PackIdVersion> const&, ::ContentBinary::Type const);

    MCNAPI bool _isClientVersionWithinRange(::CommonContent const&) const;

    MCNAPI ::DlcHydrationInfo& operator=(::DlcHydrationInfo const&);

    MCNAPI ::DlcHydrationInfo& operator=(::DlcHydrationInfo&&);

    MCNAPI ~DlcHydrationInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _isOptimizedContent(::CommonContent const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::DlcHydrationInfo const&);

    MCNAPI void* $ctor(::DlcHydrationInfo&&);

    MCNAPI void* $ctor(::PackIdVersion const&, ::Core::PathBuffer<std::string> const&);

    MCNAPI void* $ctor(::CommonDocument const&, std::vector<PackIdVersion> const&, ::ContentBinary::Type const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
