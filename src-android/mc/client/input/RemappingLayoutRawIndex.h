#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
class Keymapping;
struct DuplicateKey;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class RemappingLayoutRawIndex {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::vector<Keymapping>&> mKeymappings;
    ::ll::TypedStorage<8, 8, std::vector<Keymapping>&> mDefaultMappings;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::PubSub::Publisher<void (std::optional<ulong>), Bedrock::PubSub::ThreadModel::SingleThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mRefreshKeymappingsPublisher;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RemappingLayoutRawIndex& operator=(RemappingLayoutRawIndex const&);
    RemappingLayoutRawIndex(RemappingLayoutRawIndex const&);
    RemappingLayoutRawIndex();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void defaultKeyAtIndex(ulong);

    MCNAPI std::vector<DuplicateKey> generateIndicesOfDuplicates() const;

    MCNAPI ::Keymapping const& getKeymappingByIndex(ulong) const;

    MCNAPI ulong getNumKeymappings() const;

    MCNAPI bool isKeymappingDefault(ulong) const;

    MCNAPI void unassignDuplicateKeys(ulong);

    MCNAPI void unassignKeyAtIndex(ulong);
    // NOLINTEND
};
