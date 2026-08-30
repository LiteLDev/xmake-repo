#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/server/safety/ChatFloodingAction.h"

// auto generated forward declare list
// clang-format off
class BlockCommandOrigin;
class CallbackToken;
class Player;
// clang-format on

class TextFilteringProcessor : public ::Bedrock::EnableNonOwnerReferences {
public:
    // TextFilteringProcessor inner types define
    using MessageFilteredCallback = std::function<void(
        const std::vector<std::string>&,
        const std::vector<std::string>&,
        const std::vector<::Safety::TextFilteringEvent>&
    )>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~TextFilteringProcessor() = default;

    virtual ::CallbackToken processAnonymousMessages(::TextProcessingEventOrigin, std::vector<std::string> const&, std::function<void (const std::vector<std::string>&, const std::vector<std::string>&, const std::vector<::Safety::TextFilteringEvent>&)>) = 0;

    virtual ::CallbackToken processMessages(::BlockCommandOrigin const&, ::TextProcessingEventOrigin, std::vector<std::string> const&, std::function<void (const std::vector<std::string>&, const std::vector<std::string>&, const std::vector<::Safety::TextFilteringEvent>&)>) = 0;

    virtual ::CallbackToken processMessages(::Player const&, ::TextProcessingEventOrigin, std::vector<std::string> const&, std::function<void (const std::vector<std::string>&, const std::vector<std::string>&, const std::vector<::Safety::TextFilteringEvent>&)>) = 0;

    virtual ::Bedrock::Threading::Async<::Safety::TextFilterResult> processAnonymousMessagesAsync(::TextProcessingEventOrigin, std::vector<std::string> const&) = 0;

    virtual ::Bedrock::Threading::Async<::Safety::TextFilterResult> processMessagesAsync(::Player const&, ::TextProcessingEventOrigin, std::vector<std::string> const&) = 0;

    virtual void onStartShutdown() = 0;
    // clang-format on
    // NOLINTEND
};
