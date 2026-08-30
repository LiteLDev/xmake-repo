#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/UUID.h"
#include "mc/resources/DirectoryPackSource.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackManifestFactory;
class PackSourceReport;
class WorldTemplateCollectionView;
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
struct WorldTemplatePackSourceOptions;
// clang-format on

class WorldTemplatePackSource : public ::DirectoryPackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<WorldTemplateCollectionView>>> mView;
    ::ll::TypedStorage<8, 16, ::mce::UUID const>                                            mWorldTemplateId;
    ::ll::TypedStorage<1, 1, bool>                                                          mHasValidPathSet;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplatePackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplatePackSource();

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::mce::UUID const& getWorldTemplateId() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
