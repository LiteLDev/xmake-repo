#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/PackManagerContentSourceImpl.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CachedHostPackIdProvider;
class IContentSourceRepository;
struct PackManagerContentSourceArgs;
struct PackManagerContentSourceData;
struct PackModel;
// clang-format on

struct WorldPackManagerContentSource : public ::PackManagerContentSourceImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                             mWorldId;
    ::ll::UntypedStorage<8, 24>                                        mWorldPath;
    ::ll::TypedStorage<8, 16, std::weak_ptr<CachedHostPackIdProvider>> mCachedHostPackIdProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPackManagerContentSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldPackManagerContentSource();

    virtual void load();

    virtual void _createSelectedPackContentItems(::PackManagerContentSourceData&, std::vector<PackModel>&);

    virtual void _createAvailablePackContentItems(::PackManagerContentSourceData&, std::vector<PackModel>&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load();

    MCNAPI void $_createSelectedPackContentItems(::PackManagerContentSourceData&, std::vector<PackModel>&);

    MCNAPI void $_createAvailablePackContentItems(::PackManagerContentSourceData&, std::vector<PackModel>&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/PackManagerContentSourceImpl.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class CachedHostPackIdProvider;
struct PackManagerContentSourceData;
struct PackModel;
// clang-format on

struct WorldPackManagerContentSource : public ::PackManagerContentSourceImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                               mWorldId;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>           mWorldPath;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CachedHostPackIdProvider>> mCachedHostPackIdProvider;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void load() /*override*/;

    virtual void _createSelectedPackContentItems(
        ::PackManagerContentSourceData& packData,
        ::std::vector<::PackModel>&     selected
    ) /*override*/;

    virtual void _createAvailablePackContentItems(
        ::PackManagerContentSourceData& packData,
        ::std::vector<::PackModel>&     available
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load();

    MCAPI void
    $_createSelectedPackContentItems(::PackManagerContentSourceData& packData, ::std::vector<::PackModel>& selected);

    MCAPI void
    $_createAvailablePackContentItems(::PackManagerContentSourceData& packData, ::std::vector<::PackModel>& available);
    // NOLINTEND
};
#else // @header-generator platform
struct WorldPackManagerContentSource {};
#endif // @header-generator platform
#endif // @header-generator platform
