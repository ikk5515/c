package spring.springtest.repository;

import spring.springtest.domain.Member;

import java.util.List;
import java.util.Optional;

public interface MemberRepository {
    Member save(Member member);
    Optional<Member> findByID(Long ID);
    Optional<Member> findByName(String name);
    List<Member> findAll();
}