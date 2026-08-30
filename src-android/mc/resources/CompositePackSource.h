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
    ::ll::TypedStorage<8, 24, std::vector<PackSource*>> mPackSources;
    // NOLINTEND

public:
    // prevent constructor by default
    CompositePackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompositePackSource();

    virtual void forEachPackShared(::brstd::function_ref<void(gsl::not_null<std::shared_ptr<Pack>>)>);

    virtual void _buildSourcesForLoad(std::vector<gsl::not_null<PackSource*>>&);

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addPackSource(::PackSource*);

    MCNAPI std::vector<PackSource*> getPackSources();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $forEachPackShared(::brstd::function_ref<void(gsl::not_null<std::shared_ptr<Pack>>)>);

    MCNAPI void $_buildSourcesForLoad(std::vector<gsl::not_null<PackSource*>>&);

    MCNAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
