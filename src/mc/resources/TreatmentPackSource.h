#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Pack;
#else // @header-generator platform
#endif // @header-generator platform
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
#if defined(LL_PLAT_A) // @header-generator platform
struct TreatmentPackSourceOptions;
namespace Core { class Path; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class TreatmentPackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>             mDiscovered;
    ::ll::UntypedStorage<8, 24>                mPath;
    ::ll::TypedStorage<1, 1, ::PackType const> mPackType;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnkca5dea;
    ::ll::UntypedStorage<8, 32> mUnk46116b;
    ::ll::UntypedStorage<1, 1>  mUnk413230;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TreatmentPackSource& operator=(TreatmentPackSource const&);
    TreatmentPackSource(TreatmentPackSource const&);
#endif // @header-generator platform
    TreatmentPackSource();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TreatmentPackSource();
#else // @header-generator platform
    virtual ~TreatmentPackSource() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackOrigin getPackOrigin() const;
#else // @header-generator platform
    virtual ::PackOrigin getPackOrigin() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackType getPackType() const;
#else // @header-generator platform
    virtual ::PackType getPackType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addPack(std::shared_ptr<Pack>&&);
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
    MCNAPI ::PackOrigin $getPackOrigin() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::PackOrigin $getPackOrigin() const;

    MCNAPI ::PackType $getPackType() const;

    MCNAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&& options);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackType $getPackType() const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
