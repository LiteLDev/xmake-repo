#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/PackManagerContentSourceImpl.h"
#include "mc/client/network/realms/Content.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentSourceRepository;
struct ContentItem;
struct PackManagerContentSourceArgs;
// clang-format on

struct RealmPackManagerContentSource : public ::PackManagerContentSourceImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long>                          mRealmId;
    ::ll::TypedStorage<8, 24, std::vector<Realms::Content>> mAppliedContent;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmPackManagerContentSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmPackManagerContentSource();

    virtual void generateItems(std::vector<std::shared_ptr<ContentItem>>&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $generateItems(std::vector<std::shared_ptr<ContentItem>>&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
