inline std::string
PatriciaTreeNode::getStr(const char* data)
{
  std::string str(data + start_, length_);
  return str;
}


inline size_t
PatriciaTreeNode::getStrStart()
{
  return start_;
}


inline size_t
PatriciaTreeNode::getStrLength()
{
  return length_;
}

inline size_t
PatriciaTreeNode::getFrequency()
{
  return frequency_;
}


inline std::list<PatriciaTreeNode*>&
PatriciaTreeNode::getSons()
{
  return sons_;
}


