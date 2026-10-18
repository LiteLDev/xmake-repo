#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/UUID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/resources/DirectoryPackSource.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/resources/PackSource.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class IContentKeyProvider;
class IPackManifestFactory;
class PackSourceReport;
class WorldTemplateCollectionView;
#else // @header-generator platform
#endif // @header-generator platform
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
#if defined(LL_PLAT_A) // @header-generator platform
struct WorldTemplatePackSourceOptions;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class WorldTemplatePackSource : public ::DirectoryPackSource {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<WorldTemplateCollectionView>>> mView;
    ::ll::TypedStorage<8, 16, ::mce::UUID const>                                            mWorldTemplateId;
    ::ll::TypedStorage<1, 1, bool>                                                          mHasValidPathSet;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkcf7de5;
    ::ll::UntypedStorage<8, 16> mUnk866f94;
    ::ll::UntypedStorage<1, 1>  mUnkedfcff;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    WorldTemplatePackSource& operator=(WorldTemplatePackSource const&);
    WorldTemplatePackSource(WorldTemplatePackSource const&);
#endif // @header-generator platform
    WorldTemplatePackSource();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~WorldTemplatePackSource();
#else // @header-generator platform
    virtual ~WorldTemplatePackSource() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&& options) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&& options);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
