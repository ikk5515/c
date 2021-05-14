package spring.springtest.repository;

import org.junit.jupiter.api.Test;
import spring.springtest.domain.Member;

class MemoryMemberRepositoryTest {

    MemberRepository repository = new MemoryMemberRepository();

    @Test
    public void save() {
        Member member = new Member();
        member.setName("spring");

        repository.save(member);

         Member result = repository.findByID(member.getID()).get();
        System.out.println("result = " + (result == member));
    }
}