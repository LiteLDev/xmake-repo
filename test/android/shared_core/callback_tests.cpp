#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/BuildInfo.h"
#include "mc/deps/core/string/StringHash.h"
#include "mc/platform/brstd/move_only_function.h"

#include <array>
#include <cassert>
#include <cstdint>
#include <memory>
#include <string>

using StringCallback = brstd::move_only_function<std::string() const>;
using Predicate = brstd::move_only_function<bool() const>;
static_assert(sizeof(StringCallback) == 64 && alignof(StringCallback) == 8);
static_assert(sizeof(Predicate) == 64 && alignof(Predicate) == 8);
static_assert(sizeof(StringHash) == 4 && alignof(StringHash) == 4);
static_assert(sizeof(Common::BuildInfo) == 144 && alignof(Common::BuildInfo) == 8);
static_assert(offsetof(Common::BuildInfo, mCommitId) == 48);

struct alignas(32) AlignedCallback {
    std::string operator()() const {
        assert(reinterpret_cast<std::uintptr_t>(this) % alignof(AlignedCallback) == 0);
        return "aligned";
    }
};

int main() {
    StringCallback empty{nullptr};
    assert(!empty);
    auto owner = std::make_shared<int>(42);
    std::weak_ptr<int> lifetime = owner;
    StringCallback small = [state = std::move(owner)] { return std::to_string(*state); };
    assert(small() == "42");
    StringCallback moved{std::move(small)};
    assert(!small && moved() == "42");
    empty = std::move(moved);
    assert(!moved && empty() == "42");
    {
        std::array<int, 64> payload{};
        payload[63] = 7;
        StringCallback large = [payload] { return std::to_string(payload[63]); };
        StringCallback destination{std::move(large)};
        assert(!large && destination() == "7");
        empty = std::move(destination);
        assert(lifetime.expired());
        assert(empty() == "7");
    }
    StringCallback aligned{AlignedCallback{}};
    StringCallback alignedMoved{std::move(aligned)};
    assert(!aligned && alignedMoved() == "aligned");
    Predicate condition{[] { return true; }};
    assert(condition());
    auto hash = StringHash("#version");
    assert(hash.hash() == 0xc471ccdeu);
    empty = nullptr;
    assert(!empty);
}
