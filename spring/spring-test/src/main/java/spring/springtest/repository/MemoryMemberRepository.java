package spring.springtest.repository;

import spring.springtest.domain.Member;

import java.util.*;


public class MemoryMemberRepository implements MemberRepository {
    private static Map<Long, Member> store = new HashMap<>();
    private static long sequence = 0L;

    @Override
    public Member save(Member member) {
        member.setID(++sequence);
        store.put(member.getID(), member);
        return member;
    }

    @Override
    public Optional<Member> findByID(Long id) {
        return Optional.ofNullable(store.get(id));   // 널이 있어도 일단 실행
    }

    @Override
    public Optional<Member> findByName(String name) {
        return store.values().stream()
                .filter(member -> member.getName().equals(name))
                .findAny();
    }

    @Override
    public List<Member> findAll() {
        return new ArrayList<>(store.values());
    }

    public void clearstore(){
        store.clear();
    }
}
