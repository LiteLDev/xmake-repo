#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class Pack;
struct CompositePackSourceOptions;
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
// clang-format on

class CompositePackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<PackSource*>> mPackSources;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::PackSource*>> mPackSources;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    CompositePackSource();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    CompositePackSource();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CompositePackSource();
#else // @header-generator platform
    virtual ~CompositePackSource() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachPackShared(::brstd::function_ref<void(gsl::not_null<std::shared_ptr<Pack>>)>);
#else // @header-generator platform
    virtual void
    forEachPackShared(::brstd::function_ref<void(::gsl::not_null<::std::shared_ptr<::Pack>>)> callback) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _buildSourcesForLoad(std::vector<gsl::not_null<PackSource*>>&);
#else // @header-generator platform
    virtual void _buildSourcesForLoad(::std::vector<::gsl::not_null<::PackSource*>>& sources) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&);
#else // @header-generator platform
    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addPackSource(::PackSource*);

    MCNAPI std::vector<PackSource*> getPackSources();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI explicit CompositePackSource(::CompositePackSourceOptions options);

    MCAPI ::std::vector<::PackSource*> getPackSources();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::CompositePackSourceOptions options);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $forEachPackShared(::brstd::function_ref<void(gsl::not_null<std::shared_ptr<Pack>>)>);
#else // @header-generator platform
    MCAPI void $forEachPackShared(::brstd::function_ref<void(::gsl::not_null<::std::shared_ptr<::Pack>>)> callback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_buildSourcesForLoad(std::vector<gsl::not_null<PackSource*>>&);
#else // @header-generator platform
    MCAPI void $_buildSourcesForLoad(::std::vector<::gsl::not_null<::PackSource*>>& sources);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&&);
#else // @header-generator platform
    MCAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&&);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
