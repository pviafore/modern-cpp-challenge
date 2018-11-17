template<typename Container, typename ForwardIterator, typename Transform, typename Predicate>
auto transform_if(Container c, ForwardIterator dest, Transform transformer, Predicate predicate) {
   for(const auto& elem: c) {
       if(predicate(elem)) {
           *dest = transformer(elem);
       }
       ++dest;
   }
} 