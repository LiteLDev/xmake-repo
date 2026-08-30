#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/server/TextFilteringProcessor.h"
#include "mc/util/CallbackToken.h"

// auto generated forward declare list
// clang-format off
class BlockCommandOrigin;
class Player;
// clang-format on

namespace Bedrock::Safety {

class MockTextFilteringProcessor : public ::TextFilteringProcessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 248> mTaskGroup;
    ::ll::UntypedStorage<8, 48>  mProcessAnonymouseMessageFunc;
    ::ll::UntypedStorage<8, 48>  mProcessMessagesWithPlayerFunc;
    ::ll::UntypedStorage<8, 48>  mProcessMessagesWithBlockOriginFunc;
    ::ll::UntypedStorage<8, 48>  mOnStartShutdownFunc;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MockTextFilteringProcessor() = default;

    virtual ::CallbackToken processAnonymousMessages(::TextProcessingEventOrigin, std::vector<std::string> const&, std::function<void (const std::vector<std::string>&, const std::vector<std::string>&, const std::vector<::Safety::TextFilteringEvent>&)>);

    virtual ::CallbackToken processMessages(::BlockCommandOrigin const&, ::TextProcessingEventOrigin, std::vector<std::string> const&, std::function<void (const std::vector<std::string>&, const std::vector<std::string>&, const std::vector<::Safety::TextFilteringEvent>&)>);

    virtual ::CallbackToken processMessages(::Player const&, ::TextProcessingEventOrigin, std::vector<std::string> const&, std::function<void (const std::vector<std::string>&, const std::vector<std::string>&, const std::vector<::Safety::TextFilteringEvent>&)>);

    virtual ::Bedrock::Threading::Async<::Safety::TextFilterResult> processAnonymousMessagesAsync(::TextProcessingEventOrigin, std::vector<std::string> const&);

    virtual ::Bedrock::Threading::Async<::Safety::TextFilterResult> processMessagesAsync(::Player const&, ::TextProcessingEventOrigin, std::vector<std::string> const&);

    virtual void onStartShutdown();
    // clang-format on
    // NOLINTEND
};

} // namespace Bedrock::Safety
