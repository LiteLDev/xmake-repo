#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/session/SessionInfoManager.h"
#include "mc/deps/cereal/ReflectionCtx.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class SessionInfo; }
namespace Bedrock { template<typename T0, typename T1, typename T2, typename T3> class AccessUpdateEditor; }
namespace Bedrock::Detail { template<typename T0, typename T1> class AccessUpdateEditorAccessor; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

namespace Bedrock {

class SessionInfoManagerImpl : public ::Bedrock::SessionInfoManager {
public:
    // SessionInfoManagerImpl inner types define
    using SessionPublisher = ::Bedrock::PubSub::Publisher<
        void(
            const Bedrock::NonOwnerPointer<Bedrock::SessionInfoManager>&,
            const std::shared_ptr<const Bedrock::SessionInfo>&
        ),
        Bedrock::PubSub::ThreadModel::MultiThreaded,
        (Bedrock::PubSub::ReturnPolicyType)0>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::SessionInfo>> mCurrentSession;
    ::ll::UntypedStorage<8, 88>                                      mCurrentSessionPublisher;
    ::ll::TypedStorage<4, 40, std::mutex>                            mEditMutex;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mUpdateSubscription;
    ::ll::TypedStorage<8, 112, ::cereal::ReflectionCtx>              mCerealCtx;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SessionInfoManagerImpl();

    virtual void initialize();

    virtual void beginNewSession();

    virtual std::shared_ptr<const Bedrock::SessionInfo> getCurrentSession() const;

    virtual ::Bedrock::AccessUpdateEditor<std::shared_ptr<Bedrock::SessionInfo>, Bedrock::SessionInfoManagerImpl, Bedrock::Detail::AccessUpdateEditorAccessor<std::shared_ptr<Bedrock::SessionInfo>, void>, std::mutex> editCurrentSession();

    virtual ::Bedrock::PubSub::Connector<void (const Bedrock::NonOwnerPointer<Bedrock::SessionInfoManager>&, const std::shared_ptr<const Bedrock::SessionInfo>&)>& onCurrentSessionChanged();

    virtual std::string serializeSession(::Bedrock::SessionInfo const&) const;

    virtual std::shared_ptr<Bedrock::SessionInfo> deserializeSession(std::string_view) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initialize();

    MCNAPI void $beginNewSession();

    MCNAPI std::shared_ptr<const Bedrock::SessionInfo> $getCurrentSession() const;

    MCNAPI ::Bedrock::AccessUpdateEditor<
        std::shared_ptr<Bedrock::SessionInfo>,
        Bedrock::SessionInfoManagerImpl,
        Bedrock::Detail::AccessUpdateEditorAccessor<std::shared_ptr<Bedrock::SessionInfo>, void>,
        std::mutex>
    $editCurrentSession();

    MCNAPI ::Bedrock::PubSub::Connector<void(
        const Bedrock::NonOwnerPointer<Bedrock::SessionInfoManager>&,
        const std::shared_ptr<const Bedrock::SessionInfo>&
    )>&
    $onCurrentSessionChanged();

    MCNAPI std::string $serializeSession(::Bedrock::SessionInfo const&) const;

    MCNAPI std::shared_ptr<Bedrock::SessionInfo> $deserializeSession(std::string_view) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
