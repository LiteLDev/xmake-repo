#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IActionDataProvider.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
class RemappingLayout;
namespace Settings { class Eventing; }
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IActionDataProvider.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
class RemappingLayout;
namespace Settings { class Eventing; }
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
class RebindActionDataProvider : public ::Settings::IActionDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                                         mIndex;
    ::ll::TypedStorage<4, 4, ::InputMode>                                   mInputMode;
    ::ll::TypedStorage<8, 8, ::RemappingLayout&>                            mLayout;
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>                            mOptions;
    ::ll::TypedStorage<8, 8, ::Settings::Eventing&>                         mEventing;
    ::ll::TypedStorage<8, 8, ::Settings::RegistryBuilder::IBuilderContext&> mContext;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mRawInputEventSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mKeyboardTypeChangedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mKeyChangedSubscription;
    ::ll::UntypedStorage<1, 16>                                             mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RebindActionDataProvider& operator=(RebindActionDataProvider const&);
    RebindActionDataProvider(RebindActionDataProvider const&);
    RebindActionDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RebindActionDataProvider();

    virtual bool canModify() const;

    virtual bool flush();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canModify() const;

    MCNAPI bool $flush();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RebindActionDataProvider : public ::Settings::IActionDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                                        mIndex;
    ::ll::TypedStorage<4, 4, ::InputMode>                                   mInputMode;
    ::ll::TypedStorage<8, 8, ::RemappingLayout&>                            mLayout;
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>                            mOptions;
    ::ll::TypedStorage<8, 8, ::Settings::Eventing&>                         mEventing;
    ::ll::TypedStorage<8, 8, ::Settings::RegistryBuilder::IBuilderContext&> mContext;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mRawInputEventSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mKeyboardTypeChangedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mKeyChangedSubscription;
    ::ll::TypedStorage<1, 1, bool>                                          mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RebindActionDataProvider& operator=(RebindActionDataProvider const&);
    RebindActionDataProvider(RebindActionDataProvider const&);
    RebindActionDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool flush() /*override*/;

    virtual bool canModify() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $flush();

    MCFOLD bool $canModify() const;
    // NOLINTEND
};
#else // @header-generator platform
class RebindActionDataProvider {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings
