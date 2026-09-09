#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/IconSize.h"
#include "mc/client/input/Keymapping.h"
#include "mc/client/input/RemappingLayoutRawIndex.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
struct DuplicateKey;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class RemappingLayout {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<Keymapping>> mKeymappings;
    ::ll::TypedStorage<8, 24, std::vector<Keymapping>> mDefaultMappings;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::PubSub::Publisher<void (std::optional<ulong>), Bedrock::PubSub::ThreadModel::SingleThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mRefreshKeymappingsPublisher;
    ::ll::TypedStorage<8, 32, ::RemappingLayoutRawIndex> mLayoutRawIndex;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RemappingLayout();

    virtual void setMappingWithRawInput(std::string const&, int, ::RawInputType);

    virtual int getAdjustedKey(int) const;

    virtual std::string getSaveString(std::string const&) const;

    virtual std::string getMappedKeyName(::Keymapping const&) const;

    virtual std::string getMappedKeyName(int, bool) const;

    virtual std::string getMappedKeyName(int) const;

    virtual std::string getKeySpriteLocation(::Keymapping const&) const;

    virtual std::string getKeySpriteLocation(int, ::IconSize) const;

    virtual int _rawKeyToKey(int, ::RawInputType) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RemappingLayout();

    MCNAPI void _dispatchRefreshKeymappings(std::optional<ulong>);

    MCNAPI void assignDefaultMapping(std::vector<Keymapping>&&);

    MCNAPI void defaultKeyAtIndex(ulong);

    MCNAPI std::vector<DuplicateKey> generateIndicesOfDuplicates() const;

    MCNAPI ::Keymapping const* getKeyMappingByRawInput(int, ::RawInputType) const;

    MCNAPI ::Keymapping const& getKeymappingByAction(std::string const&) const;

    MCNAPI ::Keymapping const& getKeymappingByIndex(ulong) const;

    MCNAPI ulong getNumKeymappings() const;

    MCNAPI ::RemappingLayoutRawIndex const& getRawLayout() const;

    MCNAPI ::RemappingLayoutRawIndex& getRawLayout();

    MCNAPI ::RemappingLayout& operator=(::RemappingLayout const&);

    MCNAPI ::Bedrock::PubSub::Subscription
        registerRefreshKeymappingsListener(std::function<void(std::optional<ulong>)>);

    MCNAPI void resetToDefaultMapping();

    MCNAPI void setMapping(std::string const&, std::vector<int> const&);

    MCNAPI void unassignDuplicateKeys(ulong);

    MCNAPI void unassignKeyAtIndex(ulong);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setMappingWithRawInput(std::string const&, int, ::RawInputType);

    MCNAPI int $getAdjustedKey(int) const;

    MCNAPI std::string $getSaveString(std::string const&) const;

    MCNAPI std::string $getMappedKeyName(::Keymapping const&) const;

    MCNAPI std::string $getMappedKeyName(int, bool) const;

    MCNAPI std::string $getMappedKeyName(int) const;

    MCNAPI std::string $getKeySpriteLocation(::Keymapping const&) const;

    MCNAPI std::string $getKeySpriteLocation(int, ::IconSize) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
