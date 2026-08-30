#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace OreUI { class IResourceAllowList; }
// clang-format on

class WorldSeedModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mProductId;
    ::ll::TypedStorage<8, 24, std::string> mTitle;
    ::ll::TypedStorage<8, 24, std::string> mSeed;
    ::ll::UntypedStorage<8, 72>            mOreUIImagePath;
    ::ll::UntypedStorage<8, 24>            mImagePath;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSeedModel& operator=(WorldSeedModel const&);
    WorldSeedModel();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldSeedModel(::WorldSeedModel const&);

    MCNAPI WorldSeedModel(std::string const&, std::string const&, std::string const&);

    MCNAPI ::Core::PathBuffer<std::string> const& getImagePath() const;

    MCNAPI std::string const& getSeed() const;

    MCNAPI std::string const& getTitle() const;

    MCNAPI void
    setImagePath(::Core::Path const&, ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>> const&);

    MCNAPI ~WorldSeedModel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WorldSeedModel const&);

    MCNAPI void* $ctor(std::string const&, std::string const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
