#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentSource.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IWorldTemplateManager;
struct ContentItem;
// clang-format on

struct WorldTemplateSource : public ::ContentSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mWorldTemplateManager;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplateSource();

    virtual void load();

    virtual void generateItems(std::vector<std::shared_ptr<ContentItem>>&);

    virtual void deleteContentFiles(std::vector<std::shared_ptr<const ContentItem>> const&);

    virtual void postDeleteContent(std::vector<std::shared_ptr<const ContentItem>> const&);
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

    MCNAPI void $deleteContentFiles(std::vector<std::shared_ptr<const ContentItem>> const&);

    MCNAPI void $postDeleteContent(std::vector<std::shared_ptr<const ContentItem>> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
