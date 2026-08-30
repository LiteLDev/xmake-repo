#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentSource.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/resources/InvalidPacksFilterGroup.h"

// auto generated forward declare list
// clang-format off
class IResourcePackRepository;
struct ContentItem;
// clang-format on

struct InvalidResourceSource : public ::ContentSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository*>     mResourceRepository;
    ::ll::TypedStorage<8, 24, ::InvalidPacksFilterGroup>     mFilter;
    ::ll::TypedStorage<8, 24, std::vector<ResourceLocation>> mInvalidPacks;
    // NOLINTEND

public:
    // prevent constructor by default
    InvalidResourceSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InvalidResourceSource();

    virtual void load();

    virtual void generateItems(std::vector<std::shared_ptr<ContentItem>>&);

    virtual void deleteContentFiles(std::vector<std::shared_ptr<const ContentItem>> const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool invalidPacksChanged();
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
