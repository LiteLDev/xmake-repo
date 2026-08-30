#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/PackManagerContentSourceImpl.h"
#include "mc/client/network/realms/Content.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentSourceRepository;
struct ContentItem;
struct PackManagerContentSourceArgs;
// clang-format on

namespace Realms {

class RealmsWorldPackManagerContentSource : public ::PackManagerContentSourceImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>                                    mRealmId;
    ::ll::TypedStorage<8, 24, std::vector<Realms::Content> const> mServiceAppliedContent;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldPackManagerContentSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldPackManagerContentSource();

    virtual void load();

    virtual void generateItems(std::vector<std::shared_ptr<ContentItem>>&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsWorldPackManagerContentSource(
        ::PackManagerContentSourceArgs&&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IContentSourceRepository>>,
        ::Realms::RealmId,
        std::vector<Realms::Content>&&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::PackManagerContentSourceArgs&&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IContentSourceRepository>>,
        ::Realms::RealmId,
        std::vector<Realms::Content>&&
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
    MCNAPI void $load();

    MCNAPI void $generateItems(std::vector<std::shared_ptr<ContentItem>>&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Realms
