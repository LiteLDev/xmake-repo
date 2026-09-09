#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class SessionInfo; }
namespace Bedrock { class SessionInfoManagerImpl; }
namespace Bedrock { template<typename T0, typename T1, typename T2, typename T3> class AccessUpdateEditor; }
namespace Bedrock::Detail { template<typename T0, typename T1> class AccessUpdateEditorAccessor; }
// clang-format on

namespace Bedrock {

class SessionInfoManager : public ::Bedrock::EnableNonOwnerReferences,
                           public ::Bedrock::ImplBase<Bedrock::SessionInfoManager> {
public:
    // SessionInfoManager inner types define
    using Editor = ::Bedrock::AccessUpdateEditor<
        std::shared_ptr<Bedrock::SessionInfo>,
        Bedrock::SessionInfoManagerImpl,
        Bedrock::Detail::AccessUpdateEditorAccessor<std::shared_ptr<Bedrock::SessionInfo>, void>,
        std::mutex>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SessionInfoManager() = default;

    virtual void initialize() = 0;

    virtual void beginNewSession() = 0;

    virtual std::shared_ptr<const Bedrock::SessionInfo> getCurrentSession() const = 0;

    virtual ::Bedrock::AccessUpdateEditor<std::shared_ptr<Bedrock::SessionInfo>, Bedrock::SessionInfoManagerImpl, Bedrock::Detail::AccessUpdateEditorAccessor<std::shared_ptr<Bedrock::SessionInfo>, void>, std::mutex> editCurrentSession() = 0;

    virtual ::Bedrock::PubSub::Connector<void (const Bedrock::NonOwnerPointer<Bedrock::SessionInfoManager>&, const std::shared_ptr<const Bedrock::SessionInfo>&)>& onCurrentSessionChanged() = 0;

    virtual std::string serializeSession(::Bedrock::SessionInfo const&) const = 0;

    virtual std::shared_ptr<Bedrock::SessionInfo> deserializeSession(std::string_view) const = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace Bedrock
