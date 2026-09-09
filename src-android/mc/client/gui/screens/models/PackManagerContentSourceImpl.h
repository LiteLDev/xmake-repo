#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentSourceType.h"
#include "mc/client/gui/screens/models/PackManagerContentSource.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentSourceRepository;
class IEntitlementManager;
class IUIDefRepository;
class ResourcePackManager;
struct ContentItem;
struct PackContentItem;
struct PackInstanceId;
struct PackManagerContentSourceArgs;
// clang-format on

struct PackManagerContentSourceImpl : public ::PackManagerContentSource {
public:
    // PackManagerContentSourceImpl inner types define
    using PackContentItemPtr = std::shared_ptr<PackContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mContentSourceRepository;
    // NOLINTEND

public:
    // prevent constructor by default
    PackManagerContentSourceImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackManagerContentSourceImpl();

    virtual void save();

    virtual void saveAllPacks();

    virtual void deleteContentFiles(std::vector<std::shared_ptr<const ContentItem>> const&);

    virtual void postDeleteContent(std::vector<std::shared_ptr<const ContentItem>> const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackManagerContentSourceImpl(
        ::ContentSourceType,
        ::PackManagerContentSourceArgs&&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IContentSourceRepository>>
    );

    MCNAPI std::vector<std::shared_ptr<PackContentItem>> _getAllSelectedItems() const;

    MCNAPI void _save(bool const);

    MCNAPI void getSortedSelectedContent(
        std::vector<PackInstanceId>&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>
    );

    MCNAPI void repopulateReports(::gsl::not_null<Bedrock::NonOwnerPointer<IUIDefRepository>>, ::ResourcePackManager&);

    MCNAPI void resetCache();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ContentSourceType,
        ::PackManagerContentSourceArgs&&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IContentSourceRepository>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $save();

    MCNAPI void $saveAllPacks();

    MCNAPI void $deleteContentFiles(std::vector<std::shared_ptr<const ContentItem>> const&);

    MCNAPI void $postDeleteContent(std::vector<std::shared_ptr<const ContentItem>> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
